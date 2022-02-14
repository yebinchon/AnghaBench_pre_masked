
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t avail_in; int avail_out; unsigned char* next_out; int * next_in; } ;
struct deflate {TYPE_1__ z; int chain; } ;
typedef int fz_context ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_3, void *VAR_4, const void *VAR_5, size_t VAR_6)
{
 struct deflate *VAR_7 = VAR_4;
 unsigned char VAR_8[32 << 10];
 int VAR_9;

 VAR_7->z.next_in = (Bytef*)VAR_5;
 VAR_7->z.avail_in = VAR_6;
 do
 {
  VAR_7->z.next_out = VAR_8;
  VAR_7->z.avail_out = sizeof VAR_8;
  VAR_9 = FUNC_0(&VAR_7->z, VAR_1);
  if (VAR_9 != VAR_2)
   FUNC_1(VAR_3, VAR_0, "zlib compression failed: %d", VAR_9);
  if (VAR_7->z.avail_out > 0)
   FUNC_2(VAR_3, VAR_7->chain, VAR_7->z.next_out, VAR_7->z.avail_out);
 } while (VAR_7->z.avail_out > 0);
}
