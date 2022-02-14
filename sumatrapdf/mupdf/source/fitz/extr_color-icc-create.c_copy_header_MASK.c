
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Z; int Y; int X; } ;
struct TYPE_5__ {TYPE_1__ illuminant; int platform; int magic; int pcs; int colorSpace; int deviceClass; int version; int size; } ;
typedef TYPE_2__ icHeader ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_buffer *VAR_1, icHeader *VAR_2)
{
 FUNC_1(VAR_0, VAR_1, VAR_2->size);
 FUNC_0(VAR_0, VAR_1, 0, 4);
 FUNC_1(VAR_0, VAR_1, VAR_2->version);
 FUNC_1(VAR_0, VAR_1, VAR_2->deviceClass);
 FUNC_1(VAR_0, VAR_1, VAR_2->colorSpace);
 FUNC_1(VAR_0, VAR_1, VAR_2->pcs);
 FUNC_0(VAR_0, VAR_1, 0, 12);
 FUNC_1(VAR_0, VAR_1, VAR_2->magic);
 FUNC_1(VAR_0, VAR_1, VAR_2->platform);
 FUNC_0(VAR_0, VAR_1, 0, 24);
 FUNC_1(VAR_0, VAR_1, VAR_2->illuminant.X);
 FUNC_1(VAR_0, VAR_1, VAR_2->illuminant.Y);
 FUNC_1(VAR_0, VAR_1, VAR_2->illuminant.Z);
 FUNC_0(VAR_0, VAR_1, 0, 48);
}
