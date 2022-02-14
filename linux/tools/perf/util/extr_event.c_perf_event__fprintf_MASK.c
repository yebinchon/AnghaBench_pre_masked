
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union perf_event {TYPE_1__ header; } ;
typedef int FILE ;
 size_t FUNC_0 (int *,char*,...) ;
 size_t FUNC_1 (union perf_event*,int *) ;
 size_t FUNC_2 (union perf_event*,int *) ;
 size_t FUNC_3 (union perf_event*,int *) ;
 size_t FUNC_4 (union perf_event*,int *) ;
 size_t FUNC_5 (union perf_event*,int *) ;
 size_t FUNC_6 (union perf_event*,int *) ;
 size_t FUNC_7 (union perf_event*,int *) ;
 size_t FUNC_8 (union perf_event*,int *) ;
 size_t FUNC_9 (union perf_event*,int *) ;
 size_t FUNC_10 (union perf_event*,int *) ;
 size_t FUNC_11 (union perf_event*,int *) ;
 char* FUNC_12 (int) ;

size_t FUNC_13(union perf_event *VAR_0, FILE *VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_1, "PERF_RECORD_%s",
        FUNC_12(VAR_0->header.type));

 switch (VAR_0->header.type) {
 case 138:
  VAR_2 += FUNC_3(VAR_0, VAR_1);
  break;
 case 136:
 case 137:
  VAR_2 += FUNC_11(VAR_0, VAR_1);
  break;
 case 132:
  VAR_2 += FUNC_7(VAR_0, VAR_1);
  break;
 case 130:
  VAR_2 += FUNC_9(VAR_0, VAR_1);
  break;
 case 131:
  VAR_2 += FUNC_8(VAR_0, VAR_1);
  break;
 case 140:
  VAR_2 += FUNC_1(VAR_0, VAR_1);
  break;
 case 135:
  VAR_2 += FUNC_4(VAR_0, VAR_1);
  break;
 case 129:
 case 128:
  VAR_2 += FUNC_10(VAR_0, VAR_1);
  break;
 case 133:
  VAR_2 += FUNC_6(VAR_0, VAR_1);
  break;
 case 134:
  VAR_2 += FUNC_5(VAR_0, VAR_1);
  break;
 case 139:
  VAR_2 += FUNC_2(VAR_0, VAR_1);
  break;
 default:
  VAR_2 += FUNC_0(VAR_1, "\n");
 }

 return VAR_2;
}
