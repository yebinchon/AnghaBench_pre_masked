
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdesc {int shash; } ;


 scalar_t__ FUNC_0 (struct sdesc*) ;
 int FUNC_1 (struct sdesc*) ;
 int FUNC_2 (int *,unsigned char const*,unsigned int,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sdesc* FUNC_3 (int ) ;
 int FUNC_4 (struct sdesc*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(const unsigned char *VAR_2, unsigned int VAR_3,
      unsigned char *VAR_4)
{
 struct sdesc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_1);
 if (FUNC_0(VAR_5)) {
  FUNC_5("trusted_key: can't alloc %s\n", VAR_0);
  return FUNC_1(VAR_5);
 }

 VAR_6 = FUNC_2(&VAR_5->shash, VAR_2, VAR_3, VAR_4);
 FUNC_4(VAR_5);
 return VAR_6;
}
