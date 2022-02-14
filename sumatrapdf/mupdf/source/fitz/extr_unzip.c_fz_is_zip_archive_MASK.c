
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_stream ;
typedef int fz_context ;


 size_t FUNC_0 (int *,int *,unsigned char*,size_t) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char const*,size_t) ;
 size_t FUNC_3 (unsigned char const*) ;

int
FUNC_4(fz_context *VAR_0, fz_stream *VAR_1)
{
 const unsigned char VAR_2[4] = { 'P', 'K', 0x03, 0x04 };
 unsigned char VAR_3[4];
 size_t VAR_4;

 FUNC_1(VAR_0, VAR_1, 0, 0);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3, FUNC_3(VAR_3));
 if (VAR_4 != FUNC_3(VAR_2))
  return 0;
 if (FUNC_2(VAR_3, VAR_2, FUNC_3(VAR_2)))
  return 0;

 return 1;
}
