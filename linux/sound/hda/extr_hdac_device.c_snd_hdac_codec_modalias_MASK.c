
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int vendor_id; int revision_id; int type; } ;


 int FUNC_0 (char*,size_t,char*,int,int,int) ;

int FUNC_1(struct hdac_device *VAR_0, char *VAR_1, size_t VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, "hdaudio:v%08Xr%08Xa%02X\n",
   VAR_0->vendor_id, VAR_0->revision_id, VAR_0->type);
}
