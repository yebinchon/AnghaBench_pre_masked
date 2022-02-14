
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_pcm179x {int* cs2000_regs; } ;
struct oxygen {struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct oxygen*,size_t,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_15)
{
 struct xonar_pcm179x *VAR_16 = VAR_15->model_data;

 FUNC_0(VAR_15, VAR_10, VAR_7);
 FUNC_0(VAR_15, VAR_3, 0);
 FUNC_0(VAR_15, VAR_1,
       VAR_13 |
       (0 << VAR_14) |
       VAR_0 |
       VAR_4);
 FUNC_0(VAR_15, VAR_2,
       (0 << VAR_11) |
       VAR_6);
 FUNC_0(VAR_15, VAR_12 + 0, 0x00);
 FUNC_0(VAR_15, VAR_12 + 1, 0x10);
 FUNC_0(VAR_15, VAR_12 + 2, 0x00);
 FUNC_0(VAR_15, VAR_12 + 3, 0x00);
 FUNC_0(VAR_15, VAR_8,
       VAR_16->cs2000_regs[VAR_8]);
 FUNC_0(VAR_15, VAR_9, 0);
 FUNC_0(VAR_15, VAR_10, VAR_5);
 FUNC_1(3);
}
