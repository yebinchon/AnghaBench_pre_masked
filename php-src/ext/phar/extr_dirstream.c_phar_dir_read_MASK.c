
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_ulong ;
typedef int zend_string ;
typedef int ssize_t ;
struct TYPE_4__ {char* d_name; } ;
typedef TYPE_1__ php_stream_dirent ;
struct TYPE_5__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,size_t) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (int *,int **,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(php_stream *VAR_1, char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 HashTable *VAR_5 = (HashTable *)VAR_1->abstract;
 zend_string *VAR_6;
 zend_ulong VAR_7;

 if (VAR_0 == FUNC_5(VAR_5, &VAR_6, &VAR_7)) {
  return 0;
 }

 FUNC_6(VAR_5);
 VAR_4 = FUNC_0(FUNC_1(VAR_6), VAR_3);

 if (VAR_4 == 0 || VAR_3 < FUNC_1(VAR_6)) {
  return 0;
 }

 FUNC_4(VAR_2, 0, sizeof(php_stream_dirent));
 FUNC_3(((php_stream_dirent *) VAR_2)->d_name, FUNC_2(VAR_6), VAR_4);
 ((php_stream_dirent *) VAR_2)->d_name[VAR_4 + 1] = '\0';

 return sizeof(php_stream_dirent);
}
