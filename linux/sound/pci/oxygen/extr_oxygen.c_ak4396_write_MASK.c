
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oxygen {struct generic_data* model_data; } ;
struct generic_data {int** ak4396_regs; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (struct oxygen*,int const,int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_6, unsigned int VAR_7,
    u8 VAR_8, u8 VAR_9)
{

 static const u8 VAR_10[4] = {
  0, 1, 2, 4
 };
 struct generic_data *VAR_11 = VAR_6->model_data;

 FUNC_0(VAR_6, VAR_5 |
    VAR_4 |
    VAR_2 |
    (VAR_10[VAR_7] << VAR_3) |
    VAR_1,
    VAR_0 | (VAR_8 << 8) | VAR_9);
 VAR_11->ak4396_regs[VAR_7][VAR_8] = VAR_9;
}
