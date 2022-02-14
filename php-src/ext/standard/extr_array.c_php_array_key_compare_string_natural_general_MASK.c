
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf2 ;
typedef int buf1 ;
struct TYPE_4__ {int h; TYPE_1__* key; } ;
struct TYPE_3__ {char* val; size_t len; } ;
typedef TYPE_2__ Bucket ;


 int VAR_0 ;
 int FUNC_0 (char const*,size_t,char const*,size_t,int) ;
 char* FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, const void *VAR_2, int VAR_3)
{
 Bucket *VAR_4 = (Bucket *) VAR_1;
 Bucket *VAR_5 = (Bucket *) VAR_2;
 const char *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9;
 char VAR_10[VAR_0 + 1];
 char VAR_11[VAR_0 + 1];

 if (VAR_4->key) {
  VAR_6 = VAR_4->key->val;
  VAR_8 = VAR_4->key->len;
 } else {
  VAR_6 = FUNC_1(VAR_10 + sizeof(VAR_10) - 1, VAR_4->h);
  VAR_8 = VAR_10 + sizeof(VAR_10) - 1 - VAR_6;
 }
 if (VAR_5->key) {
  VAR_7 = VAR_5->key->val;
  VAR_9 = VAR_5->key->len;
 } else {
  VAR_7 = FUNC_1(VAR_11 + sizeof(VAR_11) - 1, VAR_5->h);
  VAR_9 = VAR_11 + sizeof(VAR_11) - 1 - VAR_6;
 }
 return FUNC_0(VAR_6, VAR_8, VAR_7, VAR_9, VAR_3);
}
