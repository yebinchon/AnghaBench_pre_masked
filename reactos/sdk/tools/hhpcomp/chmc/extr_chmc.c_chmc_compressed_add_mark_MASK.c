
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcSection {int mark_count; int mark_list; } ;
struct chmcResetTableMark {int list; int at; } ;
struct chmcFile {struct chmcSection** sections; } ;
typedef int UInt64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct chmcFile*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 struct chmcResetTableMark* FUNC_3 (int ) ;

int FUNC_4(struct chmcFile *VAR_3, UInt64 VAR_4)
{
 struct chmcSection *VAR_5;
 struct chmcResetTableMark *VAR_6;

 FUNC_0(VAR_3);

 VAR_5 = VAR_3->sections[1];

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6) {
  VAR_6->at = VAR_4;
  FUNC_1("[%d] at: %jd\n", VAR_5->mark_count, VAR_4);
  FUNC_2(&VAR_6->list, &VAR_5->mark_list);
  VAR_5->mark_count++;
  return VAR_1;
 }

 return VAR_0;
}
