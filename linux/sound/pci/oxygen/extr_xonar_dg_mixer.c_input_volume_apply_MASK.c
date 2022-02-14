
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {struct dg* model_data; } ;
struct dg {char* cs4245_shadow; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct oxygen*,size_t) ;

__attribute__((used)) static int FUNC_1(struct oxygen *VAR_2, char VAR_3, char VAR_4)
{
 struct dg *VAR_5 = VAR_2->model_data;
 int VAR_6;

 VAR_5->cs4245_shadow[VAR_0] = VAR_3;
 VAR_5->cs4245_shadow[VAR_1] = VAR_4;
 VAR_6 = FUNC_0(VAR_2, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;
 return FUNC_0(VAR_2, VAR_1);
}
