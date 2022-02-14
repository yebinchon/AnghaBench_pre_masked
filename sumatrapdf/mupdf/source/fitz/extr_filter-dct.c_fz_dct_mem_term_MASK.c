
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct jpeg_decompress_struct {int * client_data; } ;
struct TYPE_3__ {int ctx; } ;
typedef TYPE_1__ fz_dctd ;


 TYPE_1__* FUNC_0 (struct jpeg_decompress_struct*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct jpeg_decompress_struct *VAR_0)
{
 if (VAR_0->client_data)
 {
  fz_dctd *VAR_1 = FUNC_0(VAR_0);
  FUNC_1(VAR_1->ctx, VAR_0->client_data);
  VAR_0->client_data = ((void*)0);
 }
}
