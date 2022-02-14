
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf2 ;
typedef int buf1 ;
struct TYPE_4__ {int h; TYPE_1__* key; } ;
struct TYPE_3__ {char* val; } ;
typedef TYPE_2__ Bucket ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, const void *VAR_2)
{
 Bucket *VAR_3 = (Bucket *) VAR_1;
 Bucket *VAR_4 = (Bucket *) VAR_2;
 const char *VAR_5, *VAR_6;
 char VAR_7[VAR_0 + 1];
 char VAR_8[VAR_0 + 1];

 if (VAR_3->key) {
  VAR_5 = VAR_3->key->val;
 } else {
  VAR_5 = FUNC_1(VAR_7 + sizeof(VAR_7) - 1, VAR_3->h);
 }
 if (VAR_4->key) {
  VAR_6 = VAR_4->key->val;
 } else {
  VAR_6 = FUNC_1(VAR_8 + sizeof(VAR_8) - 1, VAR_4->h);
 }
 return FUNC_0(VAR_5, VAR_6);
}
