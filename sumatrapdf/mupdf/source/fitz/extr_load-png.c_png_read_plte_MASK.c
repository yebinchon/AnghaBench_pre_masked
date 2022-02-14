
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {unsigned char* palette; } ;
typedef int fz_context ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, struct info *VAR_1, const unsigned char *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = VAR_3 / 3;
 int VAR_5;

 if (VAR_4 > 256)
 {
  FUNC_0(VAR_0, "too many samples in palette");
  VAR_4 = 256;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  VAR_1->palette[VAR_5 * 4] = VAR_2[VAR_5 * 3];
  VAR_1->palette[VAR_5 * 4 + 1] = VAR_2[VAR_5 * 3 + 1];
  VAR_1->palette[VAR_5 * 4 + 2] = VAR_2[VAR_5 * 3 + 2];
 }


 for (; VAR_5 < 256; VAR_5++)
 {
  VAR_1->palette[VAR_5 * 4] = 0;
  VAR_1->palette[VAR_5 * 4 + 1] = 0;
  VAR_1->palette[VAR_5 * 4 + 2] = 0;
 }
}
