
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* remote_port; int remote_host; int database_name; int user_name; } ;
typedef TYPE_1__ Port ;
typedef int Datum ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int FUNC_1 (int ,int ,long*,int*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int,int,int,int,int ,int ,int ,char*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(int VAR_5, Datum VAR_6)
{
 Port *VAR_7 = VAR_1;
 long VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11,
    VAR_12,
    VAR_13;

 FUNC_1(VAR_2,
      FUNC_0(),
      &VAR_8, &VAR_9);
 VAR_10 = VAR_9 / 1000;

 VAR_11 = VAR_8 / VAR_3;
 VAR_8 %= VAR_3;
 VAR_12 = VAR_8 / VAR_4;
 VAR_13 = VAR_8 % VAR_4;

 FUNC_2(VAR_0,
   (FUNC_3("disconnection: session time: %d:%02d:%02d.%03d "
     "user=%s database=%s host=%s%s%s",
     VAR_11, VAR_12, VAR_13, VAR_10,
     VAR_7->user_name, VAR_7->database_name, VAR_7->remote_host,
     VAR_7->remote_port[0] ? " port=" : "", VAR_7->remote_port)));
}
