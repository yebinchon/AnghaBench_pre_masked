
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int uint16 ;
struct av_decision {int allowed; int auditdeny; int auditallow; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char const*,char const*,int ,int,char const*) ;
 int FUNC_4 (char const*,char const*,int ,struct av_decision*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_4 ;

bool
FUNC_7(const char *VAR_5,
     const char *VAR_6,
     uint16 VAR_7,
     uint32 VAR_8,
     const char *VAR_9,
     bool VAR_10)
{
 struct av_decision VAR_11;
 uint32 VAR_12;
 uint32 VAR_13;
 bool VAR_14 = 1;

 FUNC_4(VAR_5, VAR_6, VAR_7, &VAR_11);

 VAR_12 = VAR_8 & ~VAR_11.allowed;

 if (FUNC_5())
  VAR_13 = (VAR_12 ? VAR_12 : VAR_8);
 else
  VAR_13 = (VAR_12 ? (VAR_12 & VAR_11.auditdeny)
       : (VAR_8 & VAR_11.auditallow));

 if (VAR_12 &&
  FUNC_6() > 0 &&
  (VAR_11.flags & VAR_2) == 0)
  VAR_14 = 0;





 if (VAR_13 && VAR_4 != VAR_3)
 {
  FUNC_3(VAR_12,
        VAR_5,
        VAR_6,
        VAR_7,
        VAR_13,
        VAR_9);
 }

 if (!VAR_14 && VAR_10)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("SELinux: security policy violation")));
 return VAR_14;
}
