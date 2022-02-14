
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;
struct TYPE_3__ {int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int,char**,char*,struct option const*,int *) ;

 int FUNC_1 (char*,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (char*) ;

 int FUNC_3 (TYPE_1__*,int,char**) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_8(int VAR_11, char *VAR_12[])
{
 static const struct option VAR_13[] = {
  { "debug", 129, ((void*)0), 'd' },
  { "log", 129, ((void*)0), 'l' },
  { "tcp-port", 128, ((void*)0), 't' },
  { ((void*)0), 0, ((void*)0), 0 }
 };

 char *VAR_14;
 int VAR_15;
 int VAR_16, VAR_17 = -1;

 VAR_9 = 1;
 VAR_6 = 0;
 for (;;) {
  VAR_15 = FUNC_0(VAR_11, VAR_12, "+dlt:", VAR_13, ((void*)0));

  if (VAR_15 == -1)
   break;

  switch (VAR_15) {
  case 'd':
   VAR_8 = 1;
   break;
  case 'l':
   VAR_10 = 1;
   FUNC_1("", VAR_2, VAR_3);
   break;
  case 't':
   FUNC_6(VAR_5);
   break;
  case '?':
   FUNC_2("usbip: invalid option\n");


  default:
   FUNC_7();
   goto out;
  }
 }

 VAR_14 = VAR_12[VAR_7];
 if (VAR_14) {
  for (VAR_16 = 0; VAR_4[VAR_16].name != ((void*)0); VAR_16++)
   if (!FUNC_4(VAR_4[VAR_16].name, VAR_14)) {
    VAR_11 -= VAR_7;
    VAR_12 += VAR_7;
    VAR_7 = 0;
    VAR_17 = FUNC_3(&VAR_4[VAR_16], VAR_11, VAR_12);
    goto out;
   }
 }


 FUNC_5(0, ((void*)0));
out:
 return (VAR_17 > -1 ? VAR_1 : VAR_0);
}
