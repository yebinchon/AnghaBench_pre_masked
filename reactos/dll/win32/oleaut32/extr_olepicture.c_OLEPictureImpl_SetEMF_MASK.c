
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int emh ;
struct TYPE_9__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_14__ {TYPE_1__ rclFrame; } ;
struct TYPE_10__ {int hemf; } ;
struct TYPE_11__ {TYPE_2__ emf; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
struct TYPE_13__ {scalar_t__ himetricHeight; scalar_t__ himetricWidth; scalar_t__ origHeight; scalar_t__ origWidth; TYPE_4__ desc; } ;
typedef TYPE_5__ OLEPictureImpl ;
typedef TYPE_6__ ENHMETAHEADER ;


 int FUNC_0 (int ,int,TYPE_6__*) ;

__attribute__((used)) static void FUNC_1(OLEPictureImpl *VAR_0)
{
    ENHMETAHEADER VAR_1;

    FUNC_0(VAR_0->desc.u.emf.hemf, sizeof(VAR_1), &VAR_1);

    VAR_0->origWidth = 0;
    VAR_0->origHeight = 0;
    VAR_0->himetricWidth = VAR_1.rclFrame.right - VAR_1.rclFrame.left;
    VAR_0->himetricHeight = VAR_1.rclFrame.bottom - VAR_1.rclFrame.top;
}
