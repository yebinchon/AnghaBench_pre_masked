
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oxygen {struct dg* model_data; } ;
struct dg {unsigned int* cs4245_shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct oxygen*,int,unsigned int) ;

int FUNC_1(struct oxygen *VAR_7, u8 VAR_8)
{
 struct dg *VAR_9 = VAR_7->model_data;
 unsigned int VAR_10;

 VAR_10 = VAR_8 << 8;
 VAR_10 |= (VAR_0 | VAR_1) << 16;
 VAR_10 |= VAR_9->cs4245_shadow[VAR_8];

 return FUNC_0(VAR_7, VAR_6 |
    VAR_5 |
    VAR_3 |
    (0 << VAR_4) |
    VAR_2,
    VAR_10);
}
