
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct colormap {scalar_t__ cd; scalar_t__ cdspace; scalar_t__ locolormap; scalar_t__ cmranges; scalar_t__ hicolormap; scalar_t__ magic; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct colormap *VAR_0)
{
 VAR_0->magic = 0;
 if (VAR_0->cd != VAR_0->cdspace)
  FUNC_0(VAR_0->cd);
 if (VAR_0->locolormap != ((void*)0))
  FUNC_0(VAR_0->locolormap);
 if (VAR_0->cmranges != ((void*)0))
  FUNC_0(VAR_0->cmranges);
 if (VAR_0->hicolormap != ((void*)0))
  FUNC_0(VAR_0->hicolormap);
}
