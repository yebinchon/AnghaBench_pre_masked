
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synth_field {int dummy; } ;
struct synth_event {int n_fields; struct synth_field** fields; int devent; int name; } ;


 int VAR_0 ;
 struct synth_event* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct synth_event*) ;
 struct synth_field** FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct synth_event*) ;
 int FUNC_5 (char const*,int ) ;
 struct synth_event* FUNC_6 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct synth_event *FUNC_7(const char *VAR_3, int VAR_4,
          struct synth_field **VAR_5)
{
 struct synth_event *VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_6 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_6->name = FUNC_5(VAR_3, VAR_1);
 if (!VAR_6->name) {
  FUNC_4(VAR_6);
  VAR_6 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_6->fields = FUNC_3(VAR_4, sizeof(*VAR_6->fields), VAR_1);
 if (!VAR_6->fields) {
  FUNC_2(VAR_6);
  VAR_6 = FUNC_0(-VAR_0);
  goto out;
 }

 FUNC_1(&VAR_6->devent, &VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  VAR_6->fields[VAR_7] = VAR_5[VAR_7];

 VAR_6->n_fields = VAR_4;
 out:
 return VAR_6;
}
