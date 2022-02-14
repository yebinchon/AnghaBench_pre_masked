
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cChildren; scalar_t__ iImage; scalar_t__ iSelectedImage; scalar_t__ iExpandedImage; scalar_t__ pszText; scalar_t__ iIntegral; int state; } ;
struct TYPE_6__ {int mask; int stateMask; } ;
typedef TYPE_1__ TVITEMEXW ;
typedef TYPE_2__ TREEVIEW_ITEM ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static inline BOOL FUNC_0 (const TREEVIEW_ITEM *VAR_11, const TREEVIEW_ITEM *VAR_12,
                                 const TVITEMEXW *VAR_13)
{

    if ((VAR_13->mask & VAR_4) && (VAR_11->cChildren != VAR_12->cChildren))
 return VAR_3;


    if ((VAR_13->mask & VAR_6) && (VAR_11->iImage != VAR_12->iImage) &&
 VAR_12->iImage != VAR_1)
 return VAR_3;


    if ((VAR_13->mask & VAR_8) && (VAR_11->iSelectedImage != VAR_12->iSelectedImage) &&
 VAR_12->iSelectedImage != VAR_1)
 return VAR_3;

    if ((VAR_13->mask & VAR_5) && (VAR_11->iExpandedImage != VAR_12->iExpandedImage) &&
 VAR_12->iExpandedImage != VAR_1)
 return VAR_3;


    if ((VAR_13->mask & VAR_10) && (VAR_11->pszText != VAR_12->pszText) &&
 VAR_12->pszText != VAR_2)
 return VAR_3;


    if ((VAR_13->mask & VAR_7) && (VAR_11->iIntegral != VAR_12->iIntegral))
 return VAR_3;


    if ((VAR_13->mask & VAR_9) && ((VAR_11->state ^ VAR_12->state) & VAR_13->stateMask ))
 return VAR_3;

    return VAR_0;
}
