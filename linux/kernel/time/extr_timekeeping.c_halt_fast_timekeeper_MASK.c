
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tkr_dummy ;
struct tk_read_base {int * clock; scalar_t__ base; scalar_t__ base_real; } ;
struct timekeeper {struct tk_read_base tkr_raw; scalar_t__ offs_real; struct tk_read_base tkr_mono; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tk_read_base*,struct tk_read_base const*,int) ;
 int FUNC_1 (struct tk_read_base const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct tk_read_base*,int *) ;

__attribute__((used)) static void FUNC_3(const struct timekeeper *VAR_4)
{
 static struct tk_read_base VAR_5;
 const struct tk_read_base *VAR_6 = &VAR_4->tkr_mono;

 FUNC_0(&VAR_5, VAR_6, sizeof(VAR_5));
 VAR_0 = FUNC_1(VAR_6);
 VAR_5.clock = &VAR_1;
 VAR_5.base_real = VAR_6->base + VAR_4->offs_real;
 FUNC_2(&VAR_5, &VAR_2);

 VAR_6 = &VAR_4->tkr_raw;
 FUNC_0(&VAR_5, VAR_6, sizeof(VAR_5));
 VAR_5.clock = &VAR_1;
 FUNC_2(&VAR_5, &VAR_3);
}
