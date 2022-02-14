
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_kprobe {int tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct trace_kprobe*) ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct trace_kprobe*) ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 long VAR_21 ;
 int FUNC_2 (int) ;
 struct trace_kprobe* FUNC_3 (char const*,char const*,void*,char*,long,int,int,int) ;
 int FUNC_4 (struct trace_kprobe*) ;
 scalar_t__ FUNC_5 (char const) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,char*,long) ;
 char* FUNC_8 (char const*,int ) ;
 int FUNC_9 (char*,int ,int*) ;
 scalar_t__ FUNC_10 (char const*,int ,unsigned long*) ;
 int FUNC_11 (char*,char const*,int) ;
 int FUNC_12 (struct trace_kprobe*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int,char*,char,void*,...) ;
 char* FUNC_15 (char const*,char) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 () ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (char*,int,char const**) ;
 int FUNC_20 (int) ;
 int FUNC_21 (char const**,char const**,char*,int) ;
 int FUNC_22 (int *,int,char*,unsigned int) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (char*,long*) ;

__attribute__((used)) static int FUNC_25(int VAR_22, const char *VAR_23[])
{
 struct trace_kprobe *VAR_24 = ((void*)0);
 int VAR_25, VAR_26, VAR_27 = 0;
 bool VAR_28 = 0;
 char *VAR_29 = ((void*)0), *VAR_30 = ((void*)0);
 const char *VAR_31 = ((void*)0), *VAR_32 = VAR_12;
 int VAR_33 = 0;
 long VAR_34 = 0;
 void *VAR_35 = ((void*)0);
 char VAR_36[VAR_16];
 unsigned int VAR_37 = VAR_19;

 switch (VAR_23[0][0]) {
 case 'r':
  VAR_28 = 1;
  VAR_37 |= VAR_20;
  break;
 case 'p':
  break;
 default:
  return -VAR_4;
 }
 if (VAR_22 < 2)
  return -VAR_4;

 FUNC_19("trace_kprobe", VAR_22, VAR_23);

 VAR_31 = FUNC_15(&VAR_23[0][1], ':');
 if (VAR_31)
  VAR_31++;

 if (FUNC_5(VAR_23[0][1])) {
  if (!VAR_28) {
   FUNC_18(1, VAR_14);
   goto parse_error;
  }
  if (VAR_31)
   VAR_26 = VAR_31 - &VAR_23[0][1] - 1;
  else
   VAR_26 = FUNC_16(&VAR_23[0][1]);
  if (VAR_26 > VAR_16 - 1) {
   FUNC_18(1, VAR_1);
   goto parse_error;
  }
  FUNC_11(VAR_36, &VAR_23[0][1], VAR_26);
  VAR_36[VAR_26] = '\0';
  VAR_27 = FUNC_9(VAR_36, 0, &VAR_33);
  if (VAR_27 || !VAR_33) {
   FUNC_18(1, VAR_1);
   goto parse_error;
  }



  if (VAR_33 > VAR_13) {
   FUNC_18(1, VAR_15);
   goto parse_error;
  }
 }



 if (FUNC_10(VAR_23[1], 0, (unsigned long *)&VAR_35)) {
  FUNC_20(1);

  if (FUNC_15(VAR_23[1], '/') && FUNC_15(VAR_23[1], ':')) {
   VAR_27 = -VAR_4;
   goto error;
  }

  VAR_29 = FUNC_8(VAR_23[1], VAR_11);
  if (!VAR_29)
   return -VAR_9;

  VAR_27 = FUNC_24(VAR_29, &VAR_34);
  if (VAR_27 || VAR_34 < 0 || VAR_34 > VAR_21) {
   FUNC_18(0, VAR_2);
   goto parse_error;
  }
  if (FUNC_7(((void*)0), VAR_29, VAR_34))
   VAR_37 |= VAR_18;
  if (VAR_34 && VAR_28 && !(VAR_37 & VAR_18)) {
   FUNC_18(0, VAR_3);
   goto parse_error;
  }
 }

 FUNC_20(0);
 if (VAR_31) {
  VAR_27 = FUNC_21(&VAR_31, &VAR_32, VAR_36,
        VAR_31 - VAR_23[0]);
  if (VAR_27)
   goto parse_error;
 } else {

  if (VAR_29)
   FUNC_14(VAR_36, VAR_16, "%c_%s_%ld",
     VAR_28 ? 'r' : 'p', VAR_29, VAR_34);
  else
   FUNC_14(VAR_36, VAR_16, "%c_0x%p",
     VAR_28 ? 'r' : 'p', VAR_35);
  FUNC_13(VAR_36);
  VAR_31 = VAR_36;
 }


 VAR_24 = FUNC_3(VAR_32, VAR_31, VAR_35, VAR_29, VAR_34, VAR_33,
          VAR_22 - 2, VAR_28);
 if (FUNC_0(VAR_24)) {
  VAR_27 = FUNC_1(VAR_24);

  FUNC_2(VAR_27 != -VAR_9);
  goto out;
 }
 VAR_22 -= 2; VAR_23 += 2;


 for (VAR_25 = 0; VAR_25 < VAR_22 && VAR_25 < VAR_17; VAR_25++) {
  VAR_30 = FUNC_8(VAR_23[VAR_25], VAR_11);
  if (!VAR_30) {
   VAR_27 = -VAR_9;
   goto error;
  }

  FUNC_20(VAR_25 + 2);
  VAR_27 = FUNC_22(&VAR_24->tp, VAR_25, VAR_30, VAR_37);
  FUNC_6(VAR_30);
  if (VAR_27)
   goto error;
 }

 VAR_27 = FUNC_23(&VAR_24->tp, VAR_28);
 if (VAR_27 < 0)
  goto error;

 VAR_27 = FUNC_12(VAR_24);
 if (VAR_27) {
  FUNC_20(1);
  if (VAR_27 == -VAR_6)
   FUNC_18(0, VAR_0);
  else if (VAR_27 == -VAR_8)
   FUNC_18(0, VAR_2);
  else if (VAR_27 != -VAR_9 && VAR_27 != -VAR_5)
   FUNC_18(0, VAR_10);
  goto error;
 }

out:
 FUNC_17();
 FUNC_6(VAR_29);
 return VAR_27;

parse_error:
 VAR_27 = -VAR_7;
error:
 FUNC_4(VAR_24);
 goto out;
}
