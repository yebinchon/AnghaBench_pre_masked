
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seg6_local_lwt {TYPE_1__* srh; } ;
struct TYPE_3__ {int hdrlen; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(struct seg6_local_lwt *VAR_0, struct seg6_local_lwt *VAR_1)
{
 int VAR_2 = (VAR_0->srh->hdrlen + 1) << 3;

 if (VAR_2 != ((VAR_1->srh->hdrlen + 1) << 3))
  return 1;

 return FUNC_0(VAR_0->srh, VAR_1->srh, VAR_2);
}
