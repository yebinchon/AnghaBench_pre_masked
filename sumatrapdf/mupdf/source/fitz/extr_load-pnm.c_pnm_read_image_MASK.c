
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int subimages; void* cs; } ;
typedef int fz_pixmap ;
typedef int fz_context ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int * FUNC_3 (int *,struct info*,unsigned char const*,unsigned char const*,int,unsigned char const**) ;
 int * FUNC_4 (int *,struct info*,unsigned char const*,unsigned char const*,int,int,unsigned char const**) ;
 int * FUNC_5 (int *,struct info*,unsigned char const*,unsigned char const*,int,int,unsigned char const**) ;
 unsigned char* FUNC_6 (int *,unsigned char const*,unsigned char const*,char*) ;
 unsigned char* FUNC_7 (int *,unsigned char const*,unsigned char const*,int ) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static fz_pixmap *
FUNC_9(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, size_t VAR_4, int VAR_5, int VAR_6)
{
 const unsigned char *VAR_7 = VAR_3 + VAR_4;
 char VAR_8[3] = { 0 };
 fz_pixmap *VAR_9 = ((void*)0);

 while (VAR_3 < VAR_7 && ((!VAR_5 && VAR_6 >= 0) || VAR_5))
 {
  int VAR_10 = VAR_5 || (VAR_6 > 0);

  VAR_3 = FUNC_6(VAR_1, VAR_3, VAR_7, VAR_8);
  VAR_3 = FUNC_7(VAR_1, VAR_3, VAR_7, 0);

  if (!FUNC_8(VAR_8, "P1"))
  {
   VAR_2->cs = FUNC_0(VAR_1);
   VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_7, VAR_10, 1, &VAR_3);
  }
  else if (!FUNC_8(VAR_8, "P2"))
  {
   VAR_2->cs = FUNC_0(VAR_1);
   VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_7, VAR_10, 0, &VAR_3);
  }
  else if (!FUNC_8(VAR_8, "P3"))
  {
   VAR_2->cs = FUNC_1(VAR_1);
   VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_7, VAR_10, 0, &VAR_3);
  }
  else if (!FUNC_8(VAR_8, "P4"))
  {
   VAR_2->cs = FUNC_0(VAR_1);
   VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_7, VAR_10, 1, &VAR_3);
  }
  else if (!FUNC_8(VAR_8, "P5"))
  {
   VAR_2->cs = FUNC_0(VAR_1);
   VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_7, VAR_10, 0, &VAR_3);
  }
  else if (!FUNC_8(VAR_8, "P6"))
  {
   VAR_2->cs = FUNC_1(VAR_1);
   VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_7, VAR_10, 0, &VAR_3);
  }
  else if (!FUNC_8(VAR_8, "P7"))
   VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_7, VAR_10, &VAR_3);
  else
   FUNC_2(VAR_1, VAR_0, "unsupported portable anymap signature (0x%02x, 0x%02x)", VAR_8[0], VAR_8[1]);

  if (VAR_5)
   VAR_2->subimages++;
  if (VAR_6 >= 0)
   VAR_6--;
 }

 if (VAR_3 >= VAR_7 && VAR_6 >= 0)
  FUNC_2(VAR_1, VAR_0, "subimage count out of range");

 return VAR_9;
}
