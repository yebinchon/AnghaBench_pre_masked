
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdac_stream {int index; } ;
struct hdac_ext_stream {int decoupled; struct hdac_stream hstream; } ;
struct hdac_bus {int reg_lock; scalar_t__ ppcap; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct hdac_bus *VAR_1,
    struct hdac_ext_stream *VAR_2, bool VAR_3)
{
 struct hdac_stream *VAR_4 = &VAR_2->hstream;
 u32 VAR_5;
 int VAR_6 = FUNC_0(VAR_4->index);

 FUNC_3(&VAR_1->reg_lock);
 VAR_5 = FUNC_1(VAR_1->ppcap + VAR_0) & VAR_6;

 if (VAR_3 && !VAR_5)
  FUNC_2(VAR_1->ppcap, VAR_0, VAR_6, VAR_6);
 else if (!VAR_3 && VAR_5)
  FUNC_2(VAR_1->ppcap, VAR_0, VAR_6, 0);

 VAR_2->decoupled = VAR_3;
 FUNC_4(&VAR_1->reg_lock);
}
