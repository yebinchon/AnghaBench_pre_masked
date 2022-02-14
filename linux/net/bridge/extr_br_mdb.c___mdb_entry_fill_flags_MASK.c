
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct br_mdb_entry {unsigned char state; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

__attribute__((used)) static void FUNC_0(struct br_mdb_entry *VAR_5, unsigned char VAR_6)
{
 VAR_5->state = VAR_6 & VAR_4;
 VAR_5->flags = 0;
 if (VAR_6 & VAR_3)
  VAR_5->flags |= VAR_1;
 if (VAR_6 & VAR_2)
  VAR_5->flags |= VAR_0;
}
