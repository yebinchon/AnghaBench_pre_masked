
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct ft2_source {int last_checked; int update_file; scalar_t__ m_timestamp; int text; int text_file; scalar_t__ log_mode; int from_file; } ;


 int FUNC_0 (float) ;
 int FUNC_1 (struct ft2_source*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ft2_source*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct ft2_source*,int ) ;
 int FUNC_6 (struct ft2_source*) ;

__attribute__((used)) static void FUNC_7(void *VAR_0, float VAR_1)
{
 struct ft2_source *VAR_2 = VAR_0;
 if (VAR_2 == ((void*)0))
  return;
 if (!VAR_2->from_file || !VAR_2->text_file)
  return;

 if (FUNC_4() - VAR_2->last_checked >= 1000000000) {
  time_t VAR_3 = FUNC_2(VAR_2->text_file);
  VAR_2->last_checked = FUNC_4();

  if (VAR_2->update_file) {
   if (VAR_2->log_mode)
    FUNC_5(VAR_2, VAR_2->text_file);
   else
    FUNC_3(VAR_2,
          VAR_2->text_file);
   FUNC_1(VAR_2, VAR_2->text);
   FUNC_6(VAR_2);
   VAR_2->update_file = 0;
  }

  if (VAR_2->m_timestamp != VAR_3) {
   VAR_2->m_timestamp = VAR_3;
   VAR_2->update_file = 1;
  }
 }

 FUNC_0(VAR_1);
}
