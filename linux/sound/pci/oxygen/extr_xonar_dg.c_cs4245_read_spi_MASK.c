
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oxygen {struct dg* model_data; } ;
struct dg {int * cs4245_shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct oxygen*,int ) ;
 int FUNC_1 (struct oxygen*,int,int) ;

int FUNC_2(struct oxygen *VAR_9, u8 VAR_10)
{
 struct dg *VAR_11 = VAR_9->model_data;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_9, VAR_8 |
  VAR_7 |
  VAR_3 |
  VAR_4 | (0 << VAR_5),
  ((VAR_0 | VAR_2) << 8) | VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_9, VAR_8 |
  VAR_7 |
  VAR_3 |
  VAR_4 | (0 << VAR_5),
  (VAR_0 | VAR_1) << 8);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11->cs4245_shadow[VAR_10] = FUNC_0(VAR_9, VAR_6);

 return 0;
}
