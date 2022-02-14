
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int timebuf ;
struct entry {int flags; int mode; int blocks; int size; int name; int t; } ;
struct TYPE_2__ {int blkorder; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char const,char*,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,char*,int ) ;
 char* FUNC_8 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_9(const struct entry *VAR_5, int VAR_6, uint VAR_7)
{
 char VAR_8[24], VAR_9[4], VAR_10 = '\0', VAR_11[] = "\0\0";
 const char VAR_12 = (VAR_5->flags & VAR_1) ? '+' : ' ';


 FUNC_7(VAR_8, sizeof(VAR_8), "%F %R", FUNC_4(&VAR_5->t));
 VAR_8[sizeof(VAR_8)-1] = '\0';


 VAR_9[0] = '0' + ((VAR_5->mode >> 6) & 7);
 VAR_9[1] = '0' + ((VAR_5->mode >> 3) & 7);
 VAR_9[2] = '0' + (VAR_5->mode & 7);
 VAR_9[3] = '\0';


 if (FUNC_0(VAR_5->mode) && !(VAR_5->mode & 0100))
  ++VAR_7;


 const char *VAR_13 = FUNC_8(VAR_5->name, VAR_7, ((void*)0));


 FUNC_6(VAR_5->flags);

 if (VAR_6)
  FUNC_2(VAR_0);

 switch (VAR_5->mode & VAR_2) {
 case 129:
  if (VAR_5->mode & 0100)
   FUNC_5("%c%-16.16s  %s %8.8s* %s*\n", VAR_12, VAR_8, VAR_9,
          FUNC_3(VAR_4.blkorder ? VAR_5->blocks << VAR_3 : VAR_5->size), VAR_13);
  else
   FUNC_5("%c%-16.16s  %s %8.8s  %s\n", VAR_12, VAR_8, VAR_9,
          FUNC_3(VAR_4.blkorder ? VAR_5->blocks << VAR_3 : VAR_5->size), VAR_13);
  break;
 case 132:
  FUNC_5("%c%-16.16s  %s %8.8s  %s/\n", VAR_12, VAR_8, VAR_9,
         FUNC_3(VAR_4.blkorder ? VAR_5->blocks << VAR_3 : VAR_5->size), VAR_13);
  break;
 case 130:
  FUNC_5("%c%-16.16s  %s        @  %s@\n", VAR_12, VAR_8, VAR_9, VAR_13);
  break;
 case 128:
  VAR_10 = VAR_11[0] = '=';
 case 131:
  if (!VAR_10)
   VAR_10 = VAR_11[0] = '|';
 case 134:
  if (!VAR_10)
   VAR_10 = 'b';
 case 133:
  if (!VAR_10)
   VAR_10 = 'c';
 default:
  if (!VAR_10)
   VAR_10 = VAR_11[0] = '?';
  FUNC_5("%c%-16.16s  %s        %c  %s%s\n", VAR_12, VAR_8, VAR_9, VAR_10, VAR_13, VAR_11);
  break;
 }

 if (VAR_6)
  FUNC_1(VAR_0);
}
