
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {unsigned int system_sample_rate; } ;


 unsigned int FUNC_0 (struct hdspm*) ;
 unsigned int FUNC_1 (struct hdspm*) ;
 scalar_t__ FUNC_2 (struct hdspm*) ;

__attribute__((used)) static int FUNC_3(struct hdspm *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 > 207000) {

  if (0 == FUNC_2(VAR_0)) {

   VAR_1 = VAR_0->system_sample_rate;
  } else {

   VAR_1 = FUNC_0(VAR_0);
   if (!VAR_1)
    VAR_1 = VAR_0->system_sample_rate;
  }
 }

 return VAR_1;
}
