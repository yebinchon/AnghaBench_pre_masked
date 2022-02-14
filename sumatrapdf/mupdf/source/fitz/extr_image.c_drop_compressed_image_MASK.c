
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_image ;
typedef int fz_context ;
struct TYPE_2__ {int buffer; int tile; } ;
typedef TYPE_1__ fz_compressed_image ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_image *VAR_1)
{
 fz_compressed_image *VAR_2 = (fz_compressed_image *)VAR_1;

 FUNC_1(VAR_0, VAR_2->tile);
 FUNC_0(VAR_0, VAR_2->buffer);
}
