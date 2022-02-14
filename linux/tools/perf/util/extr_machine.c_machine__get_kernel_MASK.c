
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {char* mmap_name; } ;
struct dso {int has_build_id; } ;
struct TYPE_2__ {char* vmlinux_name; char* default_guest_vmlinux_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dso*,struct machine*) ;
 struct dso* FUNC_1 (struct machine*,char const*,char*,int ) ;
 scalar_t__ FUNC_2 (struct machine*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static struct dso *FUNC_3(struct machine *VAR_3)
{
 const char *VAR_4 = VAR_3->mmap_name;
 struct dso *VAR_5;

 if (FUNC_2(VAR_3)) {
  if (VAR_2.vmlinux_name)
   VAR_4 = VAR_2.vmlinux_name;

  VAR_5 = FUNC_1(VAR_3, VAR_4,
       "[kernel]", VAR_1);
 } else {
  if (VAR_2.default_guest_vmlinux_name)
   VAR_4 = VAR_2.default_guest_vmlinux_name;

  VAR_5 = FUNC_1(VAR_3, VAR_4,
       "[guest.kernel]",
       VAR_0);
 }

 if (VAR_5 != ((void*)0) && (!VAR_5->has_build_id))
  FUNC_0(VAR_5, VAR_3);

 return VAR_5;
}
