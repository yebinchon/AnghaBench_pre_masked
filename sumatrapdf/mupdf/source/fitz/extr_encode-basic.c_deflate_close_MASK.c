
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* next_out; int avail_out; scalar_t__ avail_in; int * next_in; } ;
struct deflate {TYPE_1__ z; int chain; } ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_4, void *VAR_5)
{
 struct deflate *VAR_6 = VAR_5;
 unsigned char VAR_7[32 << 10];
 int VAR_8;

 VAR_6->z.next_in = ((void*)0);
 VAR_6->z.avail_in = 0;
 do
 {
  VAR_6->z.next_out = VAR_7;
  VAR_6->z.avail_out = sizeof VAR_7;
  VAR_8 = FUNC_0(&VAR_6->z, VAR_1);
  if (VAR_6->z.avail_out > 0)
   FUNC_2(VAR_4, VAR_6->chain, VAR_6->z.next_out, VAR_6->z.avail_out);
 } while (VAR_8 == VAR_2);

 if (VAR_8 != VAR_3)
  FUNC_1(VAR_4, VAR_0, "zlib compression failed: %d", VAR_8);
}
