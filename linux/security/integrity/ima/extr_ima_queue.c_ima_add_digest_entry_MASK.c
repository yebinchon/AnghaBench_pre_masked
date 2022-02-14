
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ima_template_entry {int digest; } ;
struct ima_queue_entry {int hnext; int later; struct ima_template_entry* entry; } ;
struct TYPE_2__ {int * queue; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct ima_template_entry*) ;
 int FUNC_3 (int *,int *) ;
 unsigned int FUNC_4 (int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 struct ima_queue_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct ima_template_entry *VAR_6,
    bool VAR_7)
{
 struct ima_queue_entry *VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0)) {
  FUNC_7("OUT OF MEMORY ERROR creating queue entry\n");
  return -VAR_0;
 }
 VAR_8->entry = VAR_6;

 FUNC_0(&VAR_8->later);
 FUNC_6(&VAR_8->later, &VAR_5);

 FUNC_1(&VAR_4.len);
 if (VAR_7) {
  VAR_9 = FUNC_4(VAR_6->digest);
  FUNC_3(&VAR_8->hnext, &VAR_4.queue[VAR_9]);
 }

 if (VAR_3 != VAR_2) {
  int VAR_10;

  VAR_10 = FUNC_2(VAR_6);
  VAR_3 = (VAR_3 < VAR_2 - VAR_10) ?
       VAR_3 + VAR_10 : VAR_2;
 }
 return 0;
}
