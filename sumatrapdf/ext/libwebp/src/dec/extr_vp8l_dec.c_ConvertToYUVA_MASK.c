
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int y_stride; int u_stride; int v_stride; int a_stride; int * a; int * v; int * u; scalar_t__ y; } ;
typedef TYPE_2__ WebPYUVABuffer ;
struct TYPE_5__ {TYPE_2__ YUVA; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_3__ WebPDecBuffer ;


 int FUNC_0 (int const* const,int * const,int * const,int,int) ;
 int FUNC_1 (int const* const,scalar_t__,int) ;
 int FUNC_2 (int *,int ,int,int,int * const,int ) ;

__attribute__((used)) static void FUNC_3(const uint32_t* const VAR_0, int VAR_1, int VAR_2,
                          const WebPDecBuffer* const VAR_3) {
  const WebPYUVABuffer* const VAR_4 = &VAR_3->u.YUVA;


  FUNC_1(VAR_0, VAR_4->y + VAR_2 * VAR_4->y_stride, VAR_1);


  {
    uint8_t* const VAR_5 = VAR_4->u + (VAR_2 >> 1) * VAR_4->u_stride;
    uint8_t* const VAR_6 = VAR_4->v + (VAR_2 >> 1) * VAR_4->v_stride;


    FUNC_0(VAR_0, VAR_5, VAR_6, VAR_1, !(VAR_2 & 1));
  }

  if (VAR_4->a != ((void*)0)) {
    uint8_t* const VAR_7 = VAR_4->a + VAR_2 * VAR_4->a_stride;



    FUNC_2((uint8_t*)VAR_0 + 3, 0, VAR_1, 1, VAR_7, 0);

  }
}
