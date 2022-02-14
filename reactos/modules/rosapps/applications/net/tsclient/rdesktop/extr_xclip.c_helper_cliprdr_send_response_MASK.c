
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_6__ {scalar_t__ rdp_clipboard_request_format; int rdesktop_is_selection_owner; } ;
struct TYPE_7__ {TYPE_1__ xclip; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_2(RDPCLIENT * VAR_1, uint8 * VAR_2, uint32 VAR_3)
{
 if (VAR_1->xclip.rdp_clipboard_request_format != 0)
 {
  FUNC_0(VAR_1, VAR_2, VAR_3);
  VAR_1->xclip.rdp_clipboard_request_format = 0;
  if (!VAR_1->xclip.rdesktop_is_selection_owner)
   FUNC_1(VAR_1, VAR_0);
 }
}
