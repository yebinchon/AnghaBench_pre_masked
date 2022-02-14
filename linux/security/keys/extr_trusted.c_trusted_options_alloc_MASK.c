
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trusted_key_options {int keyhandle; int keytype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct trusted_key_options* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct trusted_key_options *FUNC_2(void)
{
 struct trusted_key_options *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 < 0)
  return ((void*)0);

 VAR_4 = FUNC_0(sizeof *VAR_4, VAR_0);
 if (VAR_4) {

  VAR_4->keytype = VAR_2;

  if (!VAR_5)
   VAR_4->keyhandle = VAR_1;
 }
 return VAR_4;
}
