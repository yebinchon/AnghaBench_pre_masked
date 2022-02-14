
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {scalar_t__ tupletype; scalar_t__ maxval; scalar_t__ depth; scalar_t__ height; scalar_t__ width; } ;
typedef int fz_context ;


 int VAR_0 ;





 int VAR_1 ;

 int FUNC_0 (int *,int ,char*) ;
 unsigned char* FUNC_1 (int *,unsigned char const*,unsigned char const*,scalar_t__*) ;
 unsigned char* FUNC_2 (int *,unsigned char const*,unsigned char const*,int*) ;
 unsigned char* FUNC_3 (int *,unsigned char const*,unsigned char const*,scalar_t__*) ;
 unsigned char* FUNC_4 (int *,unsigned char const*,unsigned char const*,int ) ;

__attribute__((used)) static const unsigned char *
FUNC_5(fz_context *VAR_2, struct info *VAR_3, const unsigned char *VAR_4, const unsigned char *VAR_5)
{
 int VAR_6 = VAR_1;

 VAR_3->width = 0;
 VAR_3->height = 0;
 VAR_3->depth = 0;
 VAR_3->maxval = 0;
 VAR_3->tupletype = 0;

 while (VAR_4 < VAR_5 && VAR_6 != 132)
 {
  VAR_4 = FUNC_2(VAR_2, VAR_4, VAR_5, &VAR_6);
  VAR_4 = FUNC_4(VAR_2, VAR_4, VAR_5, 0);
  switch (VAR_6)
  {
  case 128: VAR_4 = FUNC_1(VAR_2, VAR_4, VAR_5, &VAR_3->width); break;
  case 131: VAR_4 = FUNC_1(VAR_2, VAR_4, VAR_5, &VAR_3->height); break;
  case 133: VAR_4 = FUNC_1(VAR_2, VAR_4, VAR_5, &VAR_3->depth); break;
  case 130: VAR_4 = FUNC_1(VAR_2, VAR_4, VAR_5, &VAR_3->maxval); break;
  case 129: VAR_4 = FUNC_3(VAR_2, VAR_4, VAR_5, &VAR_3->tupletype); break;
  case 132: break;
  default: FUNC_0(VAR_2, VAR_0, "unknown header token in pnm image");
  }

  if (VAR_6 != 132)
   VAR_4 = FUNC_4(VAR_2, VAR_4, VAR_5, 0);
 }

 return VAR_4;
}
