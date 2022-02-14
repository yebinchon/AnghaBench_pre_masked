
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_4__ {scalar_t__ server_depth; scalar_t__ width; scalar_t__ height; } ;
typedef int STREAM ;
typedef TYPE_1__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_5(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 uint16 VAR_2, VAR_3, VAR_4;

 FUNC_1(VAR_1, VAR_4);
 FUNC_2(VAR_1, 6);

 FUNC_1(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_3);

 FUNC_0(("setting desktop size and depth to: %dx%dx%d\n", VAR_2, VAR_3, VAR_4));





 if (VAR_0->server_depth != VAR_4)
 {
  FUNC_4("Remote desktop does not support colour depth %d; falling back to %d\n",
   VAR_0->server_depth, VAR_4);
  VAR_0->server_depth = VAR_4;
 }
 if (VAR_0->width != VAR_2 || VAR_0->height != VAR_3)
 {
  FUNC_4("Remote desktop changed from %dx%d to %dx%d.\n", VAR_0->width, VAR_0->height,
   VAR_2, VAR_3);
  VAR_0->width = VAR_2;
  VAR_0->height = VAR_3;
  FUNC_3(VAR_0);
 }
}
