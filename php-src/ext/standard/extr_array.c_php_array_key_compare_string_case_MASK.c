
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
 int FUNC_0 (char const*,size_t,char const*,size_t) ;
 char* FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, const void *VAR_2)
{
 Bucket *VAR_3 = (Bucket *) VAR_1;
 Bucket *VAR_4 = (Bucket *) VAR_2;
 const char *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8;
 char VAR_9[VAR_0 + 1];
 char VAR_10[VAR_0 + 1];

 if (VAR_3->key) {
  VAR_5 = VAR_3->key->val;
  VAR_7 = VAR_3->key->len;
 } else {
  VAR_5 = FUNC_1(VAR_9 + sizeof(VAR_9) - 1, VAR_3->h);
  VAR_7 = VAR_9 + sizeof(VAR_9) - 1 - VAR_5;
 }
 if (VAR_4->key) {
  VAR_6 = VAR_4->key->val;
  VAR_8 = VAR_4->key->len;
 } else {
  VAR_6 = FUNC_1(VAR_10 + sizeof(VAR_10) - 1, VAR_4->h);
  VAR_8 = VAR_10 + sizeof(VAR_10) - 1 - VAR_5;
 }
 return FUNC_0(VAR_5, VAR_7, VAR_6, VAR_8);
}
