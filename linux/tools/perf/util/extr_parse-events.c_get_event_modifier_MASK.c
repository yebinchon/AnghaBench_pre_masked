
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exclude_user; int exclude_kernel; int exclude_hv; int exclude_host; int exclude_guest; int exclude_idle; int precise_ip; int pinned; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {int exclude_GH; TYPE_2__ core; } ;
struct event_modifier {int eu; int ek; int eh; int eH; int eG; int eI; int precise; int precise_max; int exclude_GH; int sample_read; int pinned; int weak; } ;


 int VAR_0 ;
 int FUNC_0 (struct event_modifier*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct event_modifier *VAR_1, char *VAR_2,
          struct evsel *VAR_3)
{
 int VAR_4 = VAR_3 ? VAR_3->core.attr.exclude_user : 0;
 int VAR_5 = VAR_3 ? VAR_3->core.attr.exclude_kernel : 0;
 int VAR_6 = VAR_3 ? VAR_3->core.attr.exclude_hv : 0;
 int VAR_7 = VAR_3 ? VAR_3->core.attr.exclude_host : 0;
 int VAR_8 = VAR_3 ? VAR_3->core.attr.exclude_guest : 0;
 int VAR_9 = VAR_3 ? VAR_3->core.attr.exclude_idle : 0;
 int VAR_10 = VAR_3 ? VAR_3->core.attr.precise_ip : 0;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = VAR_3 ? VAR_3->core.attr.pinned : 0;

 int VAR_14 = VAR_4 | VAR_5 | VAR_6;
 int VAR_15 = VAR_3 ? VAR_3->exclude_GH : 0;
 int VAR_16 = 0;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 while (*VAR_2) {
  if (*VAR_2 == 'u') {
   if (!VAR_14)
    VAR_14 = VAR_4 = VAR_5 = VAR_6 = 1;
   VAR_4 = 0;
  } else if (*VAR_2 == 'k') {
   if (!VAR_14)
    VAR_14 = VAR_4 = VAR_5 = VAR_6 = 1;
   VAR_5 = 0;
  } else if (*VAR_2 == 'h') {
   if (!VAR_14)
    VAR_14 = VAR_4 = VAR_5 = VAR_6 = 1;
   VAR_6 = 0;
  } else if (*VAR_2 == 'G') {
   if (!VAR_15)
    VAR_15 = VAR_8 = VAR_7 = 1;
   VAR_8 = 0;
  } else if (*VAR_2 == 'H') {
   if (!VAR_15)
    VAR_15 = VAR_8 = VAR_7 = 1;
   VAR_7 = 0;
  } else if (*VAR_2 == 'I') {
   VAR_9 = 1;
  } else if (*VAR_2 == 'p') {
   VAR_10++;

   if (!VAR_15)
    VAR_8 = 1;
  } else if (*VAR_2 == 'P') {
   VAR_11 = 1;
  } else if (*VAR_2 == 'S') {
   VAR_12 = 1;
  } else if (*VAR_2 == 'D') {
   VAR_13 = 1;
  } else if (*VAR_2 == 'W') {
   VAR_16 = 1;
  } else
   break;

  ++VAR_2;
 }
 if (VAR_10 > 3)
  return -VAR_0;

 VAR_1->eu = VAR_4;
 VAR_1->ek = VAR_5;
 VAR_1->eh = VAR_6;
 VAR_1->eH = VAR_7;
 VAR_1->eG = VAR_8;
 VAR_1->eI = VAR_9;
 VAR_1->precise = VAR_10;
 VAR_1->precise_max = VAR_11;
 VAR_1->exclude_GH = VAR_15;
 VAR_1->sample_read = VAR_12;
 VAR_1->pinned = VAR_13;
 VAR_1->weak = VAR_16;

 return 0;
}
