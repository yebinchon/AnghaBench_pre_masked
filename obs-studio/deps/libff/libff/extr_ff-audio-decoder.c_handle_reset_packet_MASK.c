
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_packet {int base; int * clock; } ;
struct ff_decoder {int * clock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static bool FUNC_2(struct ff_decoder *VAR_0,
                                struct ff_packet *VAR_1)
{
 if (VAR_0->clock != ((void*)0))
  FUNC_1(&VAR_0->clock);
 VAR_0->clock = VAR_1->clock;
 FUNC_0(&VAR_1->base);

 return 1;
}
