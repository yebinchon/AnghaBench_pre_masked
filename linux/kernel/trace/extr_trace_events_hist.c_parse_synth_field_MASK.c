
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synth_field {char* type; int is_string; int is_signed; int size; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct synth_field* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct synth_field*) ;
 int FUNC_2 (char const*,int,int ) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static struct synth_field *FUNC_11(int VAR_3, const char **VAR_4,
          int *VAR_5)
{
 struct synth_field *VAR_6;
 const char *VAR_7 = ((void*)0), *VAR_8 = VAR_4[0], *VAR_9, *VAR_10;
 int VAR_11, VAR_12 = 0;

 if (VAR_8[0] == ';')
  VAR_8++;

 if (!FUNC_6(VAR_8, "unsigned")) {
  if (VAR_3 < 3)
   return FUNC_0(-VAR_0);
  VAR_7 = "unsigned ";
  VAR_8 = VAR_4[1];
  VAR_9 = VAR_4[2];
  *VAR_5 = 3;
 } else {
  VAR_9 = VAR_4[1];
  *VAR_5 = 2;
 }

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_7(VAR_9);
 VAR_10 = FUNC_5(VAR_9, '[');
 if (VAR_10)
  VAR_11 -= FUNC_7(VAR_10);
 else if (VAR_9[VAR_11 - 1] == ';')
  VAR_11--;

 VAR_6->name = FUNC_2(VAR_9, VAR_11, VAR_2);
 if (!VAR_6->name) {
  VAR_12 = -VAR_1;
  goto free;
 }

 if (VAR_8[0] == ';')
  VAR_8++;
 VAR_11 = FUNC_7(VAR_8) + 1;
 if (VAR_10)
  VAR_11 += FUNC_7(VAR_10);
 if (VAR_7)
  VAR_11 += FUNC_7(VAR_7);

 VAR_6->type = FUNC_3(VAR_11, VAR_2);
 if (!VAR_6->type) {
  VAR_12 = -VAR_1;
  goto free;
 }
 if (VAR_7)
  FUNC_4(VAR_6->type, VAR_7);
 FUNC_4(VAR_6->type, VAR_8);
 if (VAR_10) {
  FUNC_4(VAR_6->type, VAR_10);
  if (VAR_6->type[VAR_11 - 1] == ';')
   VAR_6->type[VAR_11 - 1] = '\0';
 }

 VAR_6->size = FUNC_10(VAR_6->type);
 if (!VAR_6->size) {
  VAR_12 = -VAR_0;
  goto free;
 }

 if (FUNC_8(VAR_6->type))
  VAR_6->is_string = 1;

 VAR_6->is_signed = FUNC_9(VAR_6->type);

 out:
 return VAR_6;
 free:
 FUNC_1(VAR_6);
 VAR_6 = FUNC_0(VAR_12);
 goto out;
}
