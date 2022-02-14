
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synth_field {int devent; } ;
struct synth_event {int devent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct synth_field*) ;
 int FUNC_1 (struct synth_field*) ;
 int VAR_2 ;
 struct synth_field* FUNC_2 (char const*,int,struct synth_field**) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 struct synth_field* FUNC_4 (char const*) ;
 int FUNC_5 (struct synth_field*) ;
 int FUNC_6 (struct synth_field*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct synth_field* FUNC_9 (int,char const**,int*) ;
 int FUNC_10 (struct synth_field*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;

__attribute__((used)) static int FUNC_12(int VAR_4, const char *VAR_5, const char **VAR_6)
{
 struct synth_field *VAR_7, *VAR_8[VAR_2];
 struct synth_event *VAR_9 = ((void*)0);
 int VAR_10, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 if (VAR_5[0] == '\0' || VAR_4 < 1)
  return -VAR_1;

 FUNC_7(&VAR_3);

 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9) {
  VAR_13 = -VAR_0;
  goto out;
 }

 for (VAR_10 = 0; VAR_10 < VAR_4 - 1; VAR_10++) {
  if (FUNC_11(VAR_6[VAR_10], ";") == 0)
   continue;
  if (VAR_12 == VAR_2) {
   VAR_13 = -VAR_1;
   goto err;
  }

  VAR_7 = FUNC_9(VAR_4 - VAR_10, &VAR_6[VAR_10], &VAR_11);
  if (FUNC_0(VAR_7)) {
   VAR_13 = FUNC_1(VAR_7);
   goto err;
  }
  VAR_8[VAR_12++] = VAR_7;
  VAR_10 += VAR_11 - 1;
 }

 if (VAR_10 < VAR_4 && FUNC_11(VAR_6[VAR_10], ";") != 0) {
  VAR_13 = -VAR_1;
  goto err;
 }

 VAR_9 = FUNC_2(VAR_5, VAR_12, VAR_8);
 if (FUNC_0(VAR_9)) {
  VAR_13 = FUNC_1(VAR_9);
  VAR_9 = ((void*)0);
  goto err;
 }
 VAR_13 = FUNC_10(VAR_9);
 if (!VAR_13)
  FUNC_3(&VAR_9->devent);
 else
  FUNC_5(VAR_9);
 out:
 FUNC_8(&VAR_3);

 return VAR_13;
 err:
 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
  FUNC_6(VAR_8[VAR_10]);

 goto out;
}
