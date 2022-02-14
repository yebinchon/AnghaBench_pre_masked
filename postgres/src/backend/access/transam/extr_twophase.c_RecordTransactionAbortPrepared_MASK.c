
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int RelFileNode ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int *,int,int *,int,int ,char const*) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_9(TransactionId VAR_3,
          int VAR_4,
          TransactionId *VAR_5,
          int VAR_6,
          RelFileNode *VAR_7,
          const char *VAR_8)
{
 XLogRecPtr VAR_9;





 if (FUNC_5(VAR_3))
  FUNC_8(VAR_1, "cannot abort transaction %u, it was already committed",
    VAR_3);

 FUNC_2();






 VAR_9 = FUNC_7(FUNC_1(),
        VAR_4, VAR_5,
        VAR_6, VAR_7,
        VAR_0 | VAR_2,
        VAR_3, VAR_8);


 FUNC_6(VAR_9);





 FUNC_4(VAR_3, VAR_4, VAR_5);

 FUNC_0();







 FUNC_3(VAR_9, 0);
}
