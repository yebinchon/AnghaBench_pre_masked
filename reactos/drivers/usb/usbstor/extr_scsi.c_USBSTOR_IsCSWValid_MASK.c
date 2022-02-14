
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Signature; scalar_t__ Tag; } ;
struct TYPE_4__ {TYPE_3__ csw; } ;
typedef TYPE_1__* PIRP_CONTEXT ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;

__attribute__((used)) static
BOOLEAN
FUNC_2(
    PIRP_CONTEXT VAR_3)
{
    if (VAR_3->csw.Signature != VAR_0)
    {
        FUNC_0("[USBSTOR] Expected Signature %x but got %x\n", VAR_0, VAR_3->csw.Signature);
        return VAR_1;
    }

    if (VAR_3->csw.Tag != FUNC_1(&VAR_3->csw))
    {
        FUNC_0("[USBSTOR] Expected Tag %Ix but got %x\n", FUNC_1(&VAR_3->csw), VAR_3->csw.Tag);
        return VAR_1;
    }

    return VAR_2;
}
