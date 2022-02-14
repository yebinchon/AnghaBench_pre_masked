
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_event {int type; } ;
typedef int ev ;


 int VAR_0 ;
 int FUNC_0 (struct uhid_event*,int ,int) ;
 int FUNC_1 (int,struct uhid_event*) ;

__attribute__((used)) static void FUNC_2(int VAR_1)
{
 struct uhid_event VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.type = VAR_0;

 FUNC_1(VAR_1, &VAR_2);
}
