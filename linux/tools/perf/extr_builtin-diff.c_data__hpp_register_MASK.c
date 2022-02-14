
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_fmt {void* sort; void* color; void* collapse; void* cmp; int entry; int width; int header; } ;
struct diff_hpp_fmt {int idx; struct perf_hpp_fmt fmt; } ;
struct data__file {struct diff_hpp_fmt* fmt; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct data__file*,struct diff_hpp_fmt*) ;
 int FUNC_1 (struct perf_hpp_fmt*) ;
 int FUNC_2 (struct perf_hpp_fmt*) ;

__attribute__((used)) static void FUNC_3(struct data__file *VAR_14, int VAR_15)
{
 struct diff_hpp_fmt *VAR_16 = &VAR_14->fmt[VAR_15];
 struct perf_hpp_fmt *VAR_17 = &VAR_16->fmt;

 VAR_16->idx = VAR_15;

 VAR_17->header = VAR_12;
 VAR_17->width = VAR_13;
 VAR_17->entry = VAR_11;
 VAR_17->cmp = VAR_3;
 VAR_17->collapse = VAR_3;


 switch (VAR_15) {
 case 133:
  VAR_17->color = VAR_6;
  VAR_17->sort = VAR_0;
  break;
 case 131:
  VAR_17->color = VAR_8;
  VAR_17->sort = VAR_1;
  break;
 case 129:
  VAR_17->color = VAR_9;
  VAR_17->sort = VAR_4;
  break;
 case 128:
  VAR_17->color = VAR_10;
  VAR_17->sort = VAR_5;
  break;
 case 130:
  VAR_17->color = VAR_8;
  VAR_17->sort = VAR_2;
  break;
 case 132:
  VAR_17->color = VAR_7;
  VAR_17->sort = VAR_3;
  break;
 default:
  VAR_17->sort = VAR_3;
  break;
 }

 FUNC_0(VAR_14, VAR_16);
 FUNC_1(VAR_17);
 FUNC_2(VAR_17);
}
