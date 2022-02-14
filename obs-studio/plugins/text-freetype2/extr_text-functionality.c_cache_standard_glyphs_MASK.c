
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ft2_source {scalar_t__ texbuf_y; scalar_t__ texbuf_x; int ** cacheglyphs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ft2_source*,char*) ;
 size_t VAR_0 ;

void FUNC_2(struct ft2_source *VAR_1)
{
 for (uint32_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->cacheglyphs[VAR_2] != ((void*)0)) {
   FUNC_0(VAR_1->cacheglyphs[VAR_2]);
   VAR_1->cacheglyphs[VAR_2] = ((void*)0);
  }
 }

 VAR_1->texbuf_x = 0;
 VAR_1->texbuf_y = 0;

 FUNC_1(VAR_1, L"abcdefghijklmnopqrstuvwxyz"
         L"ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"
         L"!@#$%^&*()-_=+,<.>/?\\|[]{}`~ \'\"\0");
}
