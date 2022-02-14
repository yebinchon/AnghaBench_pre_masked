
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmtp_session {int blockids; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static inline int FUNC_1(struct cmtp_session *VAR_0)
{
 int VAR_1, VAR_2 = -1;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  if (!FUNC_0(VAR_1, &VAR_0->blockids)) {
   VAR_2 = VAR_1;
   break;
  }

 return VAR_2;
}
