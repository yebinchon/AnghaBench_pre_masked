
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int msg; } ;
struct TYPE_4__ {int chain; TYPE_2__ z; } ;
typedef TYPE_1__ fz_inflate_state ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, void *VAR_2)
{
 fz_inflate_state *VAR_3 = (fz_inflate_state *)VAR_2;
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_3->z);
 if (VAR_4 != VAR_0)
  FUNC_2(VAR_1, "zlib error: inflateEnd: %s", VAR_3->z.msg);

 FUNC_0(VAR_1, VAR_3->chain);
 FUNC_1(VAR_1, VAR_3);
}
