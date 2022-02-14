
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int data; } ;
struct TYPE_9__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,...) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (char*,int ) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_6, const char *VAR_7)
{
 PQExpBuffer VAR_8 = FUNC_4();
 PQExpBuffer VAR_9 = FUNC_4();
 int VAR_10;

 FUNC_1(VAR_9, "\"%s\" %s %s", VAR_2,
       VAR_3->data, VAR_7);





 if (VAR_1)
  FUNC_2(VAR_9, " -Fa ");
 else
  FUNC_2(VAR_9, " -Fp ");





 FUNC_1(VAR_8, "%s dbname=", VAR_0);
 FUNC_0(VAR_8, VAR_6);

 FUNC_3(VAR_9, VAR_8->data);

 FUNC_7("running \"%s\"", VAR_9->data);

 FUNC_6(VAR_5);
 FUNC_6(VAR_4);

 VAR_10 = FUNC_8(VAR_9->data);

 FUNC_5(VAR_9);
 FUNC_5(VAR_8);

 return VAR_10;
}
